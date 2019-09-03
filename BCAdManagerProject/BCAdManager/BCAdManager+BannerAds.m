//
//  BCAdManager+BannerAds.m
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager+BannerAds.h"
#define kBannerAdKey                 @"ca-app-pub-3940256099942544/2934735716" /**< 横幅广告id>*/
@implementation BCAdManager (BannerAds)
/**
 横幅广告
 
 @return 横幅广告对象
 */
- (GADBannerView*)creatBannerWithPoint:(CGPoint)point
                            bannerSize:(CGSize)bannersSize
                    rootViewController:(UIViewController*)rootViewController{
    GADAdSize size = GADAdSizeFromCGSize(bannersSize);
    GADBannerView* bannerView= [[GADBannerView alloc]
                                initWithAdSize:size origin:point];
    bannerView.adUnitID = kBannerAdKey;
    bannerView.rootViewController = rootViewController;
    [bannerView loadRequest:[GADRequest request]];
    return bannerView;
}

- (void) showBannerViewWithSuperView:(UIView*)superView
                           showPotin:(CGPoint)showPoint
                          bannerSize:(CGSize)bannersSize
                  rootViewController:(UIViewController*)rootViewController{
    GADBannerView* bannerView = [self creatBannerWithPoint:showPoint bannerSize:bannersSize rootViewController:rootViewController];
    [superView addSubview:bannerView];
}

- (void) showBannerViewWithSuperView:(UIView*)superView
                           showPotin:(CGPoint)showPoint
                          bannerSize:(CGSize)bannersSize
                            delegate:(id<GADBannerViewDelegate>)delegate
                  rootViewController:(UIViewController*)rootViewController{
    GADBannerView* bannerView = [self creatBannerWithPoint:showPoint bannerSize:bannersSize rootViewController:rootViewController];
    bannerView.delegate = delegate;
    [superView addSubview:bannerView];
}
@end
