//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, NSURL, _TtC8Freeform10CRLURLItem;

@interface _TtC8Freeform9CRLURLRep
{
    MISSING_TYPE *downloadObserverIdentifier;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000070d6f0
- (void)cancelReload:(id)arg1;	// IMP=0x001000000070d540
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, readonly) _Bool shouldShowSelectionHighlight;
@property(nonatomic, readonly) _TtC8Freeform10CRLURLItem *item;
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x001000000070d340
- (void)willBeRemoved;	// IMP=0x001000000070ca70
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x001000000070c560
@property(nonatomic, readonly) NSString *previewItemTitle;
@property(nonatomic, readonly) NSURL *previewItemURL;
- (void)enterPreviewMode;	// IMP=0x0010000000bb6fa0
@property(nonatomic, readonly) _Bool wantsToHandleDoubleTapsWhenLocked;

@end

