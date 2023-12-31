//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOMiniCard, NSString, UITableView, VKRouteAnnotation;

@interface RouteAnnotationContaineeViewController
{
    _Bool _didStartObservingTableViewContentSize;	// 8 = 0x8
    VKRouteAnnotation *_routeAnnotation;	// 16 = 0x10
    CDUnknownBlockType _dismissHandler;	// 24 = 0x18
    ContainerHeaderView *_headerView;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000991729
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) VKRouteAnnotation *routeAnnotation; // @synthesize routeAnnotation=_routeAnnotation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000991654
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000099161e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000991613
- (void)headerViewTapped:(id)arg1;	// IMP=0x00100000009915d6
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000009915c4
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000009914b8
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000099142d
- (id)contentView;	// IMP=0x001000000099141b
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000009913a7
@property(readonly, nonatomic) GEOMiniCard *infoCard;
- (void)updateTheme;	// IMP=0x00100000009912ed
- (void)_updateImageInCell:(id)arg1;	// IMP=0x00100000009910e7
- (void)_updateContentInCell:(id)arg1;	// IMP=0x0010000000990dc6
- (struct CGSize)calculatePreferredContentSize;	// IMP=0x0010000000990cfe
- (void)_updatePreferredContentSize;	// IMP=0x0010000000990c7f
- (void)_updateContent;	// IMP=0x0010000000990b3a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000990aed
- (void)dealloc;	// IMP=0x0010000000990a5d
- (void)viewDidLoad;	// IMP=0x001000000099013b
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000009900dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

