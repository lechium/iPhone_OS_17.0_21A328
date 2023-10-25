//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SCNRendererViewPoint;

__attribute__((visibility("hidden")))
@interface MemojiContext : NSObject
{
    struct __CFDictionary *avatarsToRenderers;	// 8 = 0x8
    struct __CFArray *avatars;	// 16 = 0x10
    SCNRendererViewPoint *viewpoint0;	// 24 = 0x18
    SCNRendererViewPoint *viewpoint1;	// 32 = 0x20
    NSArray *viewPoints;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000912440
@property(readonly) SCNRendererViewPoint *viewpoint1; // @synthesize viewpoint1;
@property(readonly) SCNRendererViewPoint *viewpoint0; // @synthesize viewpoint0;
@property(readonly) struct __CFArray *avatars; // @synthesize avatars;
@property(readonly) struct __CFDictionary *avatarsToRenderers; // @synthesize avatarsToRenderers;
@property(readonly) NSArray *viewPoints; // @synthesize viewPoints;
- (id)init;	// IMP=0x0000000000912268

@end
