//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class GKPlayerProfileCacheObject, NSDate;

@interface FriendPlayedEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00100000001ed221

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *friend; // @dynamic friend;
@property(copy, nonatomic) NSDate *playedAt; // @dynamic playedAt;

@end

