//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TTVectorMultiTimestamp : NSObject
{
    NSArray *_timestamps;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000102ae4
@property(retain, nonatomic) NSArray *timestamps; // @synthesize timestamps=_timestamps;
- (id)description;	// IMP=0x0000000000102a54
- (void)mergeWithTimestamp:(id)arg1;	// IMP=0x000000000010294d
- (unsigned long long)compareTo:(id)arg1;	// IMP=0x000000000010282a
- (id)sortedUUIDs;	// IMP=0x00000000001026fe
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000010267a
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001025fe
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000102580
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001024f6
@property(readonly, nonatomic) _Bool isDocumentShared;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010248d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010242b
- (id)initWithTimestamps:(id)arg1;	// IMP=0x00000000001023b8
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000001022fa
- (id)serialize;	// IMP=0x0000000000118f10
- (void)saveToArchive:(void *)arg1;	// IMP=0x0000000000118a99
- (id)initWithArchive:(const void *)arg1 andCapacity:(unsigned long long)arg2;	// IMP=0x0000000000118859
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;	// IMP=0x0000000000118719

@end
