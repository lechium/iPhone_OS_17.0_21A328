//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKRecentGameListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001391ff
- (id)internalRepresentationForPlayer:(id)arg1;	// IMP=0x002000000013948e
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000013920c

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSDate *date; // @dynamic date;

@end

