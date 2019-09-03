//
//  BCAdManager+BannerAds.h
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface BCAdManager (BannerAds)
#pragma mark - 横幅广告
/**
 横幅广告
 
 @param point 初始化位置
 @param bannersSize 广告尺寸大小
 @param rootViewController 展示根视图
 @return 横幅广告实例化对象
 */
- (GADBannerView*)creatBannerWithPoint:(CGPoint)point
                            bannerSize:(CGSize)bannersSize
                    rootViewController:(UIViewController*)rootViewController;
/**
 展示横幅广告
 
 @param superView 父视图
 @param showPoint 初始化位置
 @param bannersSize 广告尺寸大小
 @param rootViewController 展示根视图
 */
- (void) showBannerViewWithSuperView:(UIView*)superView
                           showPotin:(CGPoint)showPoint
                          bannerSize:(CGSize)bannersSize
                  rootViewController:(UIViewController*)rootViewController;

/**
 展示横幅广告
 
 @param superView 父视图
 @param showPoint 初始化位置
 @param bannersSize 广告尺寸大小
 @param rootViewController 展示根视图
 */
- (void) showBannerViewWithSuperView:(UIView*)superView
                           showPotin:(CGPoint)showPoint
                          bannerSize:(CGSize)bannersSize
                            delegate:(id<GADBannerViewDelegate>)delegate
                  rootViewController:(UIViewController*)rootViewController;

@end

NS_ASSUME_NONNULL_END
