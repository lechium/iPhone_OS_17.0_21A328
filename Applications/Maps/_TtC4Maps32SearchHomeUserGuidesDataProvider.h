//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC4Maps32SearchHomeUserGuidesDataProvider : NSObject
{
    MISSING_TYPE *objects;	// 8 = 0x8
    MISSING_TYPE *type;	// 16 = 0x10
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *title;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000018310
- (id)init;	// IMP=0x00100000000182b0
- (id)headerAccessibilityIdentifier;	// IMP=0x0010000000018280
- (id)initWithObjects:(id)arg1 type:(long long)arg2 identifier:(id)arg3 title:(id)arg4;	// IMP=0x00100000000181d0
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic, copy) NSArray *objects;

@end

