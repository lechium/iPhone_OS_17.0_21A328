//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RSMajorViewInfo : NSObject
{
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_convex_hull;	// 8 = 0x8
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_convex_hull_buffer;	// 32 = 0x20
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_view_line;	// 56 = 0x38
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _major_views;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000017dda0
- (void).cxx_destruct;	// IMP=0x000000000017dd42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017dcc6
- (id)init;	// IMP=0x000000000017dc72

@end

