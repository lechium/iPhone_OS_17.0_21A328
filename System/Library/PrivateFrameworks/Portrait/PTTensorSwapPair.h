//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PTTensorSwapPair : NSObject
{
    NSString *_names[2];	// 8 = 0x8
    struct __CVBuffer *_tensorPair[2];	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043b89
- (id)tensorNameWithIndex:(int)arg1;	// IMP=0x0000000000043b6b
- (struct __CVBuffer *)tensorWithIndex:(int)arg1;	// IMP=0x0000000000043b51
- (void)dealloc;	// IMP=0x0000000000043af7
- (id)initWithIOSurfaces:(struct __IOSurface **)arg1 names:(id)arg2;	// IMP=0x0000000000043a17

@end
