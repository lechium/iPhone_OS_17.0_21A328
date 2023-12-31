//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMSharedPublishers, NSArray, NSNumber, NSString;

@protocol BMSharedSyncableStream
- (NSArray *)accountsWithError:(id *)arg1;
- (BMSharedPublishers *)publishersForAccounts:(NSArray *)arg1 deviceTypes:(unsigned int)arg2 withUseCase:(NSString *)arg3 startTime:(NSNumber *)arg4 endTime:(NSNumber *)arg5 maxEvents:(NSNumber *)arg6 lastN:(NSNumber *)arg7 reversed:(_Bool)arg8 includeLocal:(_Bool)arg9 pipeline:(id <BPSPublisher> (^)(BMBookmarkablePublisher *))arg10;
@end

