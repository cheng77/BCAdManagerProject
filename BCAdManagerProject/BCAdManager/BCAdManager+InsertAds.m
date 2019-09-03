//
//  BCAdManager+InsertAds.m
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager+InsertAds.h"
#define kBannerInsertAdKey           @"ca-app-pub-3940256099942544/4411468910" /**< 插页广告id>*/

@implementation BCAdManager (InsertAds)
- (GADInterstitial*)creatInsertAdsWithDelegate:(id <GADInterstitialDelegate>)delegate{
    self.interstitial =
    [[GADInterstitial alloc] initWithAdUnitID:kBannerInsertAdKey];
    self.interstitial.delegate = delegate;
    [self.interstitial loadRequest:[GADRequest request]];
    return self.interstitial;
}
- (void) showInsertAdsWithViewController:(UIViewController*)viewcontroller{
    if (self.interstitial.isReady) {
        [self.interstitial presentFromRootViewController:viewcontroller];
    } else {
        NSLog(@"Ad wasn't ready");
    }
}
@end
