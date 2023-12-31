//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableRLEArray, NSStorage, NSTextRange;
@protocol NSTextLocation, __NSTextRunStorageDataSource;

__attribute__((visibility("hidden")))
@interface _NSTextRunStorage : NSObject
{
    id <__NSTextRunStorageDataSource> _dataSource;	// 8 = 0x8
    NSMutableRLEArray *_RLEArray;	// 16 = 0x10
    NSStorage *_elements;	// 24 = 0x18
    NSTextRange *_seedRange;	// 32 = 0x20
    long long _seedElementIndex;	// 40 = 0x28
    _Bool _isCountable;	// 48 = 0x30
    _Bool _hasBaseLocation;	// 49 = 0x31
    _Bool _mapsLocationOffset;	// 50 = 0x32
    id <NSTextLocation> _baseLocation;	// 56 = 0x38
}

@property(readonly) id <__NSTextRunStorageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)invalidateElementsInRange:(id)arg1 delta:(long long)arg2;	// IMP=0x00000000000d02b0
- (void)setObject:(id)arg1 forRange:(id)arg2;	// IMP=0x00000000000cfbbe
- (id)enumerateObjectsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cf2b6
@property(readonly) long long baseIndex;
@property(readonly) id <NSTextLocation> baseLocation;
@property(readonly) _Bool isEmpty;
- (id)description;	// IMP=0x00000000000cec0f
- (void)dealloc;	// IMP=0x00000000000cebb4
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000ceab3

@end

