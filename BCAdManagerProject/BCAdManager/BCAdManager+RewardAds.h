//
//  BCAdManager+RewardAds.h
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/26.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface BCAdManager (RewardAds)
- (void) loadRewardAdsWithDelegate:(id <GADRewardBasedVideoAdDelegate>)delegate
                          adUnitID:(NSString*)adUnitID;

- (void) showRewardAdsWithViewController:(UIViewController*)viewcontroller;

@end

NS_ASSUME_NONNULL_END
