//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLabelValuePair : NSObject
{
    NSString *_label;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00100000000e6912
- (void).cxx_destruct;	// IMP=0x00000000000e6cd6
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *label; // @synthesize label=_label;
- (unsigned long long)hash;	// IMP=0x00000000000e6b55
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e6ad3
- (id)description;	// IMP=0x00000000000e6a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e6a2d
- (id)initWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00000000000e6984

@end
