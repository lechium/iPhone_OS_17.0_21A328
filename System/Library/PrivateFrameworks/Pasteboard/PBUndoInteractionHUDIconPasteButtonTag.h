//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBUndoInteractionHUDIconPasteButtonTag : PBPasteButtonTag
{
    double _minWidth;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000002a2e
@property(readonly) double minWidth; // @synthesize minWidth=_minWidth;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5 editMenuPasteButtonTagVisit:(CDUnknownBlockType)arg6;	// IMP=0x0000000000002a36
- (unsigned int)secureNameForStyle:(id)arg1;	// IMP=0x0000000000002a23
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x0000000000002895
- (_Bool)isValid;	// IMP=0x0000000000002857
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000027f4
- (unsigned long long)hash;	// IMP=0x00000000000027a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002724
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;	// IMP=0x00000000000026ef
- (CDStruct_8abe0896)backgroundStatisticsRegionForStyle:(id)arg1;	// IMP=0x0000000000002667
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;	// IMP=0x0000000000002636
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000025ba
- (id)initWithMinWidth:(double)arg1;	// IMP=0x0000000000002570

@end

