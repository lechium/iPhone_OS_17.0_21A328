//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;
@protocol EDPersistedMessage;

@protocol EDReadLaterCloudStorageDateProvider
- (NSDate *)cloudStorageReadLaterDateForMessage:(id <EDPersistedMessage>)arg1 displayDate:(id *)arg2;
@end
