//
//  BCAdManager+RewardAds.m
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager+RewardAds.h"

@implementation BCAdManager (RewardAds)
- (void) loadRewardAdsWithDelegate:(id <GADRewardBasedVideoAdDelegate>)delegate
                          adUnitID:(NSString*)adUnitID{
    [GADRewardBasedVideoAd sharedInstance].delegate = delegate;
    [[GADRewardBasedVideoAd sharedInstance] loadRequest:[GADRequest request]
                                           withAdUnitID:adUnitID];
}
- (void) showRewardAdsWithViewController:(UIViewController*)viewcontroller{
    if ([[GADRewardBasedVideoAd sharedInstance] isReady]) {
        [[GADRewardBasedVideoAd sharedInstance] presentFromRootViewController:viewcontroller];
    }
}
@end
