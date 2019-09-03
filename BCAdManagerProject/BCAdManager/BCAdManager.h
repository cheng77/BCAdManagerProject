//
//  BCAdManager.h
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/24.
//  Copyright © 2019 Ning. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BCAdManager : NSObject

+ (instancetype)shared;

#pragma mark - 插页广告
/** 插页广告 */
@property(nonatomic,readwrite,strong)  GADInterstitial *interstitial;

@end

NS_ASSUME_NONNULL_END
