//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NTKDComplicationStoreObserver-Protocol.h"

@class NSNumber, NTKDComplicationStore;

@protocol NTKDComplicationStoreSyncObserver <NTKDComplicationStoreObserver>
- (void)requestResetSyncForComplicationStore:(NTKDComplicationStore *)arg1;
- (void)complicationStore:(NTKDComplicationStore *)arg1 didSuppressNotificationForSeqId:(NSNumber *)arg2;
@end
