//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSValue;

__attribute__((visibility("hidden")))
@interface PDBuildMapKey : NSObject
{
    NSValue *mDrawableValue;	// 8 = 0x8
    NSString *mGroupId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000043e7be
- (id)description;	// IMP=0x000000000043e780
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043e775
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001df718
- (unsigned long long)hash;	// IMP=0x00000000001df6d5
- (void)setGroupId:(id)arg1;	// IMP=0x000000000043e764
- (id)groupId;	// IMP=0x000000000021b079
- (void)setDrawable:(id)arg1;	// IMP=0x000000000043e6fd
- (id)drawable;	// IMP=0x00000000001df8b3
- (id)initWithDrawable:(id)arg1 groupId:(id)arg2;	// IMP=0x00000000001df5f2
- (id)init;	// IMP=0x000000000043e6ce

@end

