//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLShapeCollectionDataSource, CRLShapeSearchResultsCollection, NSArray, NSString;

@interface CRLiOSShapePresetCollectionViewLayoutProvider : NSObject
{
    CRLShapeCollectionDataSource *_shapeCollectionDataSource;	// 8 = 0x8
    CRLShapeSearchResultsCollection *_searchResultsCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004b84fd
@property(retain, nonatomic) CRLShapeSearchResultsCollection *p_searchResultsCollection; // @synthesize p_searchResultsCollection=_searchResultsCollection;
@property(retain, nonatomic) CRLShapeCollectionDataSource *p_shapeCollectionDataSource; // @synthesize p_shapeCollectionDataSource=_shapeCollectionDataSource;
- (_Bool)p_isUserDefinedShapeContext:(id)arg1;	// IMP=0x00100000004b8460
- (_Bool)p_isLabeledContext:(id)arg1;	// IMP=0x00100000004b840c
- (struct CGSize)p_preferredGridSpacingInSection:(unsigned long long)arg1 forContext:(id)arg2;	// IMP=0x00100000004b7ff9
- (struct CGSize)p_preferredSwatchSize;	// IMP=0x00100000004b7fe8
@property(readonly, nonatomic) NSArray *pageControlTitles;
@property(readonly, nonatomic) unsigned long long pageControlType;
@property(readonly, nonatomic) struct CGSize swatchInsets;
@property(readonly, nonatomic) _Bool supportsSearch;
@property(readonly, nonatomic) _Bool showsSubpageNavigator;
- (_Bool)shouldVerticallyDistributeEvenlyForContext:(id)arg1;	// IMP=0x00100000004b7e7b
- (double)presetWidthToHeightRatioForContext:(id)arg1;	// IMP=0x00100000004b7e6d
- (unsigned long long)numberOfSectionsInCollectionViewForContext:(id)arg1;	// IMP=0x00100000004b7e08
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00100000004b7d48
- (double)minimumVerticalSpacingMultiplierInSection:(unsigned long long)arg1 forContext:(id)arg2;	// IMP=0x00100000004b7d05
- (double)minimumHorizontalSpacingMultiplierInSection:(unsigned long long)arg1 forContext:(id)arg2;	// IMP=0x00100000004b7cbe
- (unsigned long long)itemsPerRowForContext:(id)arg1;	// IMP=0x00100000004b7c66
- (double)horizontalInsetForItemInSection:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00100000004b7c3f
- (id)cellRegistrationDictionary;	// IMP=0x00100000004b774b
- (_Bool)isCellEditableForSection:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00100000004b7736
- (id)cellReuseIdentifierForSection:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00100000004b7708
- (double)additionalHeightForItemInSection:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00100000004b76d5
- (id)initWithShapeCollectionDataSource:(id)arg1 searchResultsCollection:(id)arg2;	// IMP=0x00100000004b763c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *subpageTitles;
@property(readonly) Class superclass;

@end

