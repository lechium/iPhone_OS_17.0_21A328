//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class MDLSubmesh;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelSubmeshRendition : CUIThemeRendition
{
    MDLSubmesh *_submesh;	// 216 = 0xd8
}

- (void)dealloc;	// IMP=0x000000000002222c
- (unsigned long long)writeToData:(id)arg1;	// IMP=0x000000000002159d
- (id)modelSubmesh;	// IMP=0x000000000002158c
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000020d59
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000020d47
- (id)initForArchiving:(id)arg1;	// IMP=0x0000000000020cf0

@end

