//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray
{
    struct {
        unsigned long long used;
        id list[0];
    } storage;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001549fb
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000154462
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154bc7
- (id)mutableCopy;	// IMP=0x0000000000154bae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154ba9
- (id)copy;	// IMP=0x0000000000154ba4
- (void)dealloc;	// IMP=0x0000000000154b17
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000154829
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000154618
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000154465
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000015409a
- (id)nothingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000154097
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000154070
- (unsigned long long)count;	// IMP=0x0000000000154064

@end

