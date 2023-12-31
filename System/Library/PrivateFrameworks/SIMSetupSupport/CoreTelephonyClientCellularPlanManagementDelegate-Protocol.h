//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol CoreTelephonyClientCellularPlanManagementDelegate <NSObject>

@optional
- (void)transferEventUpdate:(NSDictionary *)arg1;
- (void)proxSetupAuthEventUpdate:(NSDictionary *)arg1;
- (void)launchSecureIntentUI:(NSData *)arg1 isLocalConvertFlow:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)launchWebsheet:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
@end

