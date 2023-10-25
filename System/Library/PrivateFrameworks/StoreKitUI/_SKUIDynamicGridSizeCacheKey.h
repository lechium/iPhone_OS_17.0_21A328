//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface _SKUIDynamicGridSizeCacheKey : NSObject
{
    long long _position;	// 8 = 0x8
    SKUIViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b0951
@property(retain, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b08b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b084e
- (unsigned long long)hash;	// IMP=0x00000000001b0825
- (_Bool)__isSKUIDynamicGridSizeCacheKey;	// IMP=0x00000000001b081d

@end
