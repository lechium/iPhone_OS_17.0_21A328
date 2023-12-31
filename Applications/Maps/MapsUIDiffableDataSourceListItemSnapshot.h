//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSString;
@protocol MapsUIDiffableDataSourceViewModel;

@interface MapsUIDiffableDataSourceListItemSnapshot : NSObject
{
    IdentifierPath *_identifierPath;	// 8 = 0x8
    id <MapsUIDiffableDataSourceViewModel> _viewModel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000044441b
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) IdentifierPath *identifierPath; // @synthesize identifierPath=_identifierPath;
- (_Bool)needsReloadFromPreviousItemSnapshot:(id)arg1;	// IMP=0x001000000044437f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000444292
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000444271
- (id)initWithIdentifierPath:(id)arg1 viewModel:(id)arg2;	// IMP=0x0010000000444191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

