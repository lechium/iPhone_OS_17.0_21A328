//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSTrialAsset, DDSTrialQuery;

@protocol DDSTrialManagerDelegate <NSObject>
- (void)trialDidStopForQuery:(DDSTrialQuery *)arg1;
- (void)trialDidReceiveAsset:(DDSTrialAsset *)arg1 forQuery:(DDSTrialQuery *)arg2;
@end
