//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasLayoutGeometryAccessibility, CRLCanvasRepAccessibility, CRLWPStorageAccessibility, NSString;

@interface CRLCanvasLayoutAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0020000000570eed
+ (id)crlaxTargetClassName;	// IMP=0x0010000000570ee0
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x0010000000570f07
- (id)_crlaxCanvas;	// IMP=0x00100000005714dd
- (void)invalidate;	// IMP=0x00100000005712ee
@property(readonly, nonatomic) NSString *crlaxDescriptionForConnections;
@property(readonly, nonatomic) CRLCanvasRepAccessibility *crlaxRepForLayout;
@property(readonly, nonatomic) _Bool crlaxIsDraggable;
@property(readonly, nonatomic) _Bool crlaxIsSelectable;
@property(readonly, nonatomic) CRLWPStorageAccessibility *crlaxStorage;
@property(readonly, nonatomic) CRLCanvasLayoutGeometryAccessibility *crlaxInspectorGeometry;
- (id)_longDragAnnouncementStringForDiff:(struct CGPoint)arg1;	// IMP=0x0010000000075fd0
- (id)_dragAnnouncementStringForDiff:(struct CGPoint)arg1;	// IMP=0x0010000000075f73
- (long long)crlaxDragAnnouncementType;	// IMP=0x0010000000075f68
- (void)dragBy:(struct CGPoint)arg1;	// IMP=0x0010000000075e72
- (id)crlaxTarget;	// IMP=0x0010000000570efe

@end

