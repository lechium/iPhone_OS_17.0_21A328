//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBEditMenuPasteButtonTag : PBPasteButtonTag
{
    unsigned int _secureName;	// 8 = 0x8
    unsigned long long _displayMode;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
    struct CGPoint _contentOrigin;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000003fc8
@property(readonly) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned int secureName; // @synthesize secureName=_secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5 editMenuPasteButtonTagVisit:(CDUnknownBlockType)arg6;	// IMP=0x0000000000003fd0
- (unsigned int)secureNameForStyle:(id)arg1;	// IMP=0x0000000000003fb8
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x0000000000003e70
- (_Bool)isValid;	// IMP=0x0000000000003d7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003ca3
- (long long)initialSampleEventForStyle:(id)arg1;	// IMP=0x0000000000003c98
- (unsigned long long)hash;	// IMP=0x0000000000003bb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003ac8
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;	// IMP=0x0000000000003a93
- (CDStruct_8abe0896)backgroundStatisticsRegionForStyle:(id)arg1;	// IMP=0x0000000000003a6c
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;	// IMP=0x0000000000003a3b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003942
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize)arg2 contentOrigin:(struct CGPoint)arg3 displayMode:(unsigned long long)arg4;	// IMP=0x00000000000038a0

@end

