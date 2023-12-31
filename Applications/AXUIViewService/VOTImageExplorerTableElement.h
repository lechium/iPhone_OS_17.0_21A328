//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface VOTImageExplorerTableElement
{
    NSArray *_filteredColumnHeaders;	// 8 = 0x8
    NSArray *_filteredRowFeatures;	// 16 = 0x10
    NSArray *_filteredColumnFeatures;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000aaa4
@property(retain, nonatomic) NSArray *filteredColumnFeatures; // @synthesize filteredColumnFeatures=_filteredColumnFeatures;
@property(retain, nonatomic) NSArray *filteredRowFeatures; // @synthesize filteredRowFeatures=_filteredRowFeatures;
@property(retain, nonatomic) NSArray *filteredColumnHeaders; // @synthesize filteredColumnHeaders=_filteredColumnHeaders;
- (id)accessibilityIdentifier;	// IMP=0x001000000000a8ae
- (long long)accessibilityContainerType;	// IMP=0x001000000000a8a3
- (id)filteredSubfeaturesWithFeatureType:(long long)arg1;	// IMP=0x001000000000a727
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;	// IMP=0x001000000000a583
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;	// IMP=0x001000000000a3e1
- (unsigned long long)accessibilityColumnCount;	// IMP=0x001000000000a398
- (unsigned long long)accessibilityRowCount;	// IMP=0x001000000000a34f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

