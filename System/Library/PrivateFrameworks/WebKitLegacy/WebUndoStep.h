//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject
{
    struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> m_step;	// 8 = 0x8
}

+ (id)stepWithUndoStep:(void *)arg1;	// IMP=0x00600000000f0f40
+ (void)initialize;	// IMP=0x00600000000f0e70
- (id).cxx_construct;	// IMP=0x00000000000f0fc0
- (void).cxx_destruct;	// IMP=0x00000000000f0f90
- (void *)step;	// IMP=0x00000000000f0f80
- (void)dealloc;	// IMP=0x00000000000f0ef0
- (id)initWithUndoStep:(void *)arg1;	// IMP=0x00000000000f0e80

@end
