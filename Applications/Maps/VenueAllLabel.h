//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VenueAllLabel : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_shortName;	// 16 = 0x10
    NSString *_detail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b130b8
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;	// IMP=0x0010000000b12ff5

@end

