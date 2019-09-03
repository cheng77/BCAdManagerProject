//
//  kMainMacroDefinition.h
//  TSMainProject
//
//  Created by tsou on 2018/9/17.
//  Copyright © 2018年 tsou. All rights reserved.

/*
 备注 ：本文件中 定义了常用的宏 请不要改动 如需增加 新的宏定义 请自行建立宏文件 由基类管理员添加
 */

#ifndef MainMacroDefinition_h
#define MainMacroDefinition_h
/*******************屏幕********************/
/*屏幕宽高*/
#define kScreen_Width            [UIScreen mainScreen].bounds.size.width
#define kScreen_Height           [UIScreen mainScreen].bounds.size.height

/*相对于iphone6的屏幕 宽度 比*/
#define kRelativeToIphone6_Width_Scale    [UIScreen mainScreen].bounds.size.width/375.0f

/*相对于iphone6的屏幕 高度 比*/
#define kRelativeToIphone6_Height_Scale    [UIScreen mainScreen].bounds.size.height/667.0f

/*******************导航********************/
// 判断是否是ipad
#define kIsPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
// 判断iPhone4系列
#define kIPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPhone5系列
#define kIPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPhone6系列
#define kIPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
//判断iphone6+系列
#define kIPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPhoneX
#define kIPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPHoneXr
#define kIPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPhoneXs
#define kIPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)
// 判断iPhoneXs Max
#define kIPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !kIsPad : NO)


/*导航栏高度*/
#define kNavigationBar_Height   ((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 88.0 : 64.0)
/*状态栏*/
#define kStatusBar_Height       ((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 88.0 : 64.0)
/*状态栏新增高度*/
#define kStatusBar_Add_Height  ((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 24.0f : 0)

/*底部tabbar高度*/
#define kTabbar_Height         ((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 83.0 : 49.0)

/*顶部高度 适配iphonex*/
#define kSafeAreaTopHeight     ((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 88 : 64)

/*底部高度 适配iphonex*/
#define kSafeAreaBottomHeight  (((kIPHONE_X == YES || kIPHONE_Xr == YES || kIPHONE_Xs == YES || kIPHONE_Xs_Max == YES) ? 88 : 64) ? 34 : 0)

/*除去导航栏和状态栏的高度*/
#define kSCREEN_NoTopBar_Height (kScreen_Height - kSafeAreaTopHeight)

/*除开顶部和底部的高度*/
#define kScreen_NoTopAndBottomBar_Height (kScreen_Height - kSafeAreaTopHeight - kTabbar_Height)

/*******************View********************/
#define kLeftOrRigth_Space       15

/*主windows*/
#define kMainWindow              [UIApplication sharedApplication].delegate.window;

/*******************系统设备********************/
/*验证设备是否为iphoneX*/
#define kValid_WhetherOrNot_iPhoneX   ((kScreen_Height - 812) ? NO : YES)
#define kValid_WhetherOrNot_iPhone6Plus (kScreen_Width == 414 ? YES : NO)
#define kValid_WhetherOrNot_iPhone6   (kScreen_Width == 375 ? YES : NO)
#define kValid_WhetherOrNot_iPhone5   ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/*内部版本号*/
#define kInternal_Version        [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

/*发布版本号*/
#define kRelease_Version         [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
/*获取系统版本号*/
#define kDevice_Version          [[[UIDevice currentDevice] systemVersion] floatValue]

/*获取通知中心*/
#define kNotificationCenter      [NSNotificationCenter defaultCenter]

/*获取缓存*/
#define kUserDefault             [NSUserDefaults standardUserDefaults]

/*******************颜色********************/
#define kRgb_Color(r, g, b)      [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define kRgbWithAlpha_Color(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]

#define kRandomColor kRgbWithAlpha_Color(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
#define kHexColor(rgb)             [ColorUtil colorFromHexRGB:rgb]


/*清除背景色*/
#define kClearColor              [UIColor clearColor]
/*白色*/
#define kWhiteColor              [UIColor whiteColor]
/*黑色*/
#define kBlackColor              [UIColor blackColor]
/*分割线*/
#define kGray_Color kRgb_Color(230, 230, 230)

/**字体*/
#define kFont(F)  [UIFont systemFontOfSize:F]

/*图片*/
#define kImage(imageName)  [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

/**占位图*/
#define kPlaceholder_Image kImage(@"image2")

/*弱引用*/
#define kWeakObj(type)     __weak typeof(type) weak##type = type;

/*******************第三方配置********************/
/*友盟key*/
#define kUMKey             @""

/*******************通知********************/
/*发布任务成功*/
#define kPostTaskSuccessNotify              @"PostTaskSuccessNotify"
/*发布技能成功*/
#define kPostSkillSuccessNotify             @"PostSkillSuccessNotify"
/*发布展示*/
#define kPostShowSuccessNotify              @"PostShowSuccessNotify"

/*更新留言*/
#define kPostMessageSuccessNotify           @"PostMessageSuccessNotify"

/*是否第一次加载*/
#define kIsFirstLoad                         @"IsFirstLoad "


/**日志打印*/
//DEBUG 模式下打印日志,当前行
#ifdef DEBUG
# define NSLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define NSLog(...)
#endif

#endif /* MainMacroDefinition_h */
