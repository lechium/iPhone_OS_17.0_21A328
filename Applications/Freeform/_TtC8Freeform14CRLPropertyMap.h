//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform14CRLPropertyMap : NSObject
{
    MISSING_TYPE *data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000a335c0
- (id)init;	// IMP=0x0010000000a33560
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a33500
- (void)setObject:(id)arg1 forKeyedSubscript:(unsigned long long)arg2;	// IMP=0x0010000000a33120
- (id)objectForKeyedSubscript:(unsigned long long)arg1;	// IMP=0x0010000000a32f90
@property(nonatomic, readonly) _Bool isEmpty;
- (_Bool)containsProperty:(unsigned long long)arg1;	// IMP=0x0010000000a32f10
- (void)setProperty:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x0010000000a32d90
- (id)getProperty:(unsigned long long)arg1;	// IMP=0x0010000000a32d70

@end

