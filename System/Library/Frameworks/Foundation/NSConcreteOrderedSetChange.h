//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSetChange.h"

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChange : NSOrderedSetChange
{
    unsigned long long _changeType;	// 8 = 0x8
    unsigned long long _sourceIndex;	// 16 = 0x10
    unsigned long long _destinationIndex;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

- (id)value;	// IMP=0x0000000000708498
- (unsigned long long)destinationIndex;	// IMP=0x0000000000708487
- (unsigned long long)sourceIndex;	// IMP=0x0000000000708476
- (unsigned long long)changeType;	// IMP=0x0000000000708465
- (void)dealloc;	// IMP=0x0000000000708400
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;	// IMP=0x0000000000708350

@end
