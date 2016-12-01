//
//  ViewController.h
//  CountDown
//
//  Created by zeyuan on 16/11/10.
//  Copyright © 2016年 CountDown. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KKProgressTimer/KKProgressTimer.h"
#import "Macro.h"

@interface ViewController : UIViewController{
    KKProgressTimer*    _progressTimer;  //倒计时组件
    UILabel*            _progressLabel;  //倒计时数字
    UIView*             _countDownView;  //倒计时View
    UIButton*           _startBtn;
}


@end

