//
//  BCAdManager+InsertAds.h
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface BCAdManager (InsertAds)

/**
 创建一个插页广告

 @param delegate 插页广告代理
 @return 返回插页广告对象
 */
- (GADInterstitial*)creatInsertAdsWithDelegate:(id <GADInterstitialDelegate>)delegate;

/**
 弹出插页广告

 @param viewcontroller 展示viewcontroller
 */
- (void) showInsertAdsWithViewController:(UIViewController*)viewcontroller;
@end

NS_ASSUME_NONNULL_END
