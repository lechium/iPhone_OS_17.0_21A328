//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDSyncOperationManagerDataSource
@property(readonly) _Bool isNetworkConnectionAvailable;
@property(readonly) _Bool zoneFetchFailed;
@property(readonly) _Bool isCloudAccountActive;
@property(readonly) _Bool legacyZoneHasRecordsAvailable;
- (void)forceCloudFetch;
@end

