//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCTodaySeenHistoryItem <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property(readonly, copy, nonatomic) NSDate *firstSeenAt;
@property(readonly, nonatomic) long long maxVersionSeen;
@property(readonly, copy, nonatomic) NSString *articleID;
@end
