//
//  ViewController.m
//  CountDown
//
//  Created by zeyuan on 16/11/10.
//  Copyright © 2016年 CountDown. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _startBtn = [[UIButton alloc] initWithFrame:CGRectMake((SCREEN_WIDTH-100)/2, 320, 100, 100)];
    [_startBtn setTitle:@"重新开始" forState:UIControlStateNormal];
    [_startBtn setTitleColor:RGB(255, 255, 255) forState:UIControlStateNormal];
    [_startBtn setTitleColor:RGBA(255, 255, 255,0.3) forState:UIControlStateHighlighted];
    [_startBtn addTarget:self action:@selector(reStart) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:_startBtn];
    
    [self countDownInit];
    
    [self performSelector:@selector(progressStart) withObject:nil afterDelay:0.3];
}

-(void)countDownInit{
    [_startBtn setHidden:YES];
    _countDownView = [[UIView alloc] initWithFrame:CGRectMake((SCREEN_WIDTH-100)/2, 200, 100, 100)];
    [self.view addSubview:_countDownView];
    
    _progressLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 100, 100)];
    [_progressLabel setText:@"5"];
    [_progressLabel setFont:[UIFont systemFontOfSize:60]];
    [_progressLabel setTextColor:RGBA(255, 255, 255, 1)];
    [_progressLabel setTextAlignment:NSTextAlignmentCenter];
    [_countDownView addSubview:_progressLabel];
    
    _progressTimer = [[KKProgressTimer alloc] initWithFrame:_countDownView.bounds];
    [_progressTimer setProgressBackgroundColor:RGBA(255,255,255,0.1)];
    [_progressTimer setProgressColor:RGBA(255,255,255,0.1)];
    [_progressTimer setCircleBackgroundColor:RGBA(0,0,0,0.1)];
    [_countDownView addSubview:_progressTimer];
    
    UIView *xLine = [[UIView alloc] initWithFrame:CGRectMake(0, 50, 100, 0.6)];
    [xLine setBackgroundColor:RGBA(0, 0, 0,0.4)];
    [_countDownView addSubview:xLine];
    
    UIView *yLine = [[UIView alloc] initWithFrame:CGRectMake(50, 0, 0.6, 100)];
    [yLine setBackgroundColor:RGBA(0, 0, 0,0.4)];
    [_countDownView addSubview:yLine];
}

-(void)reStart{
    [self countDownInit];
    [self progressStart];
}

/**
 *  启动倒计时
 */
-(void)progressStart{
    __block int speed = 100;
    __block int timerIndex = 5;
    __block CGFloat i2 = 0;
    [_progressLabel setText:@"5"];
    [_progressTimer startWithBlock:^CGFloat {
        float num = ((i2++ >= speed) ? (i2 = 0) : i2) / speed;
        if(i2 >= speed){
            timerIndex--;
            if (timerIndex <= 0) {
                [_progressTimer stop];
                [self performSelector:@selector(closeView) withObject:nil afterDelay:0.2];
                
                
            }
            if (timerIndex > 0) {
                [_progressLabel setText:[NSString stringWithFormat:@"%i",timerIndex]];
            }
        }
        return num;
    }];
}

-(void)closeView{
    [_startBtn setHidden:NO];
    [_progressLabel setText:@"0"];
    [UIView animateWithDuration:0.4 animations:^{
        _countDownView.transform = CGAffineTransformMakeScale(1.5, 1.5);
        _countDownView.alpha = 0;
    } completion:^(BOOL finished) {
        [_countDownView removeFromSuperview];
        _countDownView = nil;
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
