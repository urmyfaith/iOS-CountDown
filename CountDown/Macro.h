//
//  Macroh
//  movikr
//
//  Created by Mapollo27 on 15/5/29.
//  Copyright (c) 2015年 movikr. All rights reserved.
//



#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(320, 640), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size)) : NO)

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)
//获取屏幕宽度
#define     SCREEN_WIDTH  [[UIScreen mainScreen] bounds].size.width
//获取屏幕高度
#define     SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#define debugMethod() NSLog(@"%s", __func__)
#else
#define NSLog(...)
#define debugMethod()
#endif

//注册消息通知

#define     NOTIFITION_SELECTCURDATE                    @"notifition_date"
#define     NOTIFITION_PUSHVIEW                         @"notifition_pushContentview"
#define     NOTIFITION_HIDERECOMMENDBUTTON              @"notifition_hideRecommendButton"
#define     NOTIFITION_SHOWRECOMMENDBUTTON              @"notifition_showRecommendButton"
#define     NOTIFITION_CLOSEUSERCENTER                  @"notifition_closeUserCenter"
#define     NOTIFITION_HIDERECOMMENDVIEW                @"notifition_hideRecommendView"
#define     NOTIFITION_SHOWRECOMMENDVIEW                @"notifition_showRecommendView"
#define     NOTIFITION_SHOWUSERINFOBUTTON               @"notifition_showUserInfoButton"
#define     NOTIFITION_HIDEUSERINFOBUTTON               @"notifition_hideUserInfoButton"
#define     NOTIFITION_HIDEMOVIEDETAILPAGEBUTTON        @"notifition_hideMovieDetailPageButton"
#define     NOTIFITION_SHOWMOVIEDETAILPAGEBUTTON        @"notifition_showMovieDetailPageButton"
#define     NOTIFITION_HIDETHEATERINDEXPAGEBUTTON       @"notifition_hideTheaterIndexPageButton"
#define     NOTIFITION_SHOWTHEATERINDEXPAGEBUTTON       @"notifition_showTheaterIndexPageButton"
///展现“暮鼓晨钟
#define     NOTIFITION_DISPLAYRECOMMENDVIEW             @"notifition_displayRecommendView"
///不展现“暮鼓晨钟
#define     NOTIFITION_NODISPLAYRECOMMENDVIEW             @"notifition_noDisplayRecommendView"
//发表文章完成后重新加载数据
#define     NOTIFITION_PUBLISHFINISH                    @"notifition_publishFinish"
//修改文章的点赞数和状态
#define     NOTIFITION_UPDATEARTICLELIKECOUNT           @"notifition_updateArticleLikeCount"
//修改晨钟暮鼓文章的评论数
#define     NOTIFITION_UPDATEARTICLECOMMENTCOUNTINTOPIC        @"notifition_updateArticleCommentCountInTopic"


//重新加载晨钟暮鼓
#define     NOTIFITION_RELOADRECOMMENDVIEW              @"notifition_reloadRecommendView"
//更新晨钟暮鼓的按钮图片
#define     NOTIFITION_UPDATERECOMMENDBUTTONIMAGE       @"notifition_updateRecommendButtonImage"
//获取用户登录状态
#define     NOTIFITION_GETUSERINFO                      @"notifition_getUserInfo"
#define     NOTIFITION_LOGINSUCCESS                     @"notifition_loginSuccess"
//编辑影院
#define     NOTIFITION_EDITCINEMA                       @"notifition_editCinema"
#define     NOTIFITION_MOVIETHEATERSRESENDER            @"notifition_movieTheatersReSender"
#define     NOTIFITION_CHANGEDEFAULTCINEMA              @"notifition_changeDefaultCinema"
//读取用户头像
#define     NOTIFITION_GETUSERBTNHEADIMG                @"notifition_getUserBtnHeadImg"

//晨钟暮鼓中，资料块中的默认图片
#define     RecommendArticleDefaultImage                @"image_article_image_default.png"
//晨钟暮鼓中，资料块中图片的高度
#define     RecommendArticleDefaultImageHeight       425
//晨钟暮鼓中，资料块中图片的宽度
#define     RecommendArticleDefaultImageWidth        688
//内容页上传图片的宽度高度
#define  ImageWidth         436
#define  ImageHeight        510
//所有按钮宽度高度
#define  ButtonWidth         53
#define  ButtonHeight        53

//颜色转换
#define     kUIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGB(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1]
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
//系统版本
#define     IOSVERSION(v) ([UIDevice currentDevice].systemVersion.floatValue==v)
//当前系统版本号
#define     SYSTEMVERSION    [[[UIDevice currentDevice] systemVersion] floatValue]
//分享相关
#define SHARTOWEIBO                    @"ShareToSinaWeiBo"
#define WeChatAppId                    @"wxd447d04ec517900e"
#define kAppKey                        @"1747172310"
#define kAppSecret                     @"cc0963fbc62c27b1528be757425b1f5c"
//#define kRedirectURI                   @"http://app.bjnews.com.cn"
//用户头像默认图片路径
#define userLogoDefaultImageUrl                     @"image_user_logo_default.png"
//晨钟默认图片路径
#define recommendMorningLogoDefaultImageUrl         @"image_recommend_morning_logo_default.png"
//暮鼓默认图片路径
#define recommendNightLogoDefaultImageUrl           @"image_recommend_night_logo_default.png"
//评论能够发布的最多字数
#define MaxCommentLength    100
//心跳动画的时间
#define HeartBeatTime       0.4
//听云key
#define TINGYUNAPIKEY       @"5532054cea6d48759861fa7e4694038d"
//友盟key
#define YOUMENGAPIKEY       @"5593474a67e58e43d9006c95"

//评论被删除的提示语
#define DeleteCommentDefaultContent       @"该评论已被河蟹"













