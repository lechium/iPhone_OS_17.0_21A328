//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBezierPath, UITextPosition, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDragCaretUpdate : NSObject
{
    UITextPosition *position;	// 8 = 0x8
    UITextRange *range;	// 16 = 0x10
    UIBezierPath *maskPath;	// 24 = 0x18
    CDUnknownBlockType alongsideAnimations;	// 32 = 0x20
    CDUnknownBlockType completion;	// 40 = 0x28
    _Bool isAnimated;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000013421e8

@end

