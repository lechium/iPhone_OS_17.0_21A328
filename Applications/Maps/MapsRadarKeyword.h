//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MapsRadarKeyword : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _number;	// 16 = 0x10
}

+ (id)keywordWithName:(id)arg1 number:(unsigned long long)arg2;	// IMP=0x002000000073891b
- (void).cxx_destruct;	// IMP=0x0020000000739151
@property(readonly, nonatomic) unsigned long long number; // @synthesize number=_number;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000007390b0
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000738b9f
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 number:(unsigned long long)arg2;	// IMP=0x0010000000738973

// Remaining properties
@property(readonly) Class superclass;

@end

