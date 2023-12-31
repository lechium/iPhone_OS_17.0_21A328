//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLLocale, CRLShapeSearchIndex, NSString;

@interface CRLBasicShapeLibrary : NSObject
{
    _Bool _showConnectionLinesInLibrary;	// 8 = 0x8
    _Bool _showLinesInLibrary;	// 9 = 0x9
    CRLLocale *_locale;	// 16 = 0x10
    CRLShapeSearchIndex *_searchIndex;	// 24 = 0x18
}

+ (id)sharedLibrary;	// IMP=0x0020000000151a54
- (void).cxx_destruct;	// IMP=0x0020000000152a65
@property(retain, nonatomic) CRLShapeSearchIndex *p_searchIndex; // @synthesize p_searchIndex=_searchIndex;
@property(readonly, nonatomic) CRLLocale *locale; // @synthesize locale=_locale;
- (void)p_updateSearchIndex:(id)arg1;	// IMP=0x0010000000152450
@property(nonatomic) _Bool showLinesInLibrary; // @synthesize showLinesInLibrary=_showLinesInLibrary;
@property(nonatomic) _Bool showConnectionLinesInLibrary; // @synthesize showConnectionLinesInLibrary=_showConnectionLinesInLibrary;
- (long long)p_shapeTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000152178
- (id)p_baseName;	// IMP=0x0010000000151f3e
- (id)shapeFromSearchResult:(id)arg1;	// IMP=0x0010000000151cfc
- (id)resultsForSearchTerm:(id)arg1;	// IMP=0x0010000000151c82
- (id)basicShapeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000151c30
@property(readonly, nonatomic) unsigned long long numberOfBasicShapes;
@property(readonly, nonatomic) NSString *name;
- (id)initWithLocale:(id)arg1;	// IMP=0x0010000000151af9

@end

