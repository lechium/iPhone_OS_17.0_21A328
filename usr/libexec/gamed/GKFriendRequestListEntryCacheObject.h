//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKFriendRequestListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0040000000135fbd
- (id)internalRepresentation;	// IMP=0x0020000000135d04
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000135995

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end

