//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTLaunchableApp : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_displayID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000138265
@property(retain, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x001000000013819c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001380ec
- (id)initWithName:(id)arg1 displayID:(id)arg2;	// IMP=0x001000000013804e

@end

