//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;	// 8 = 0x8
}

+ (id)assetManager;	// IMP=0x000000000057cacd
- (void).cxx_destruct;	// IMP=0x000000000057ded6
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (_Bool)_isTTYEnabled;	// IMP=0x000000000057ddd7
- (id)_allAvailableDefinitionDictionaries;	// IMP=0x000000000057d236
- (id)_availableDictionaryAssets;	// IMP=0x000000000057d15e
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;	// IMP=0x000000000057d00c
- (id)_dictionaryAssetType;	// IMP=0x000000000057ced8
- (id)_definitionValuesForTerm:(id)arg1;	// IMP=0x000000000057cc68
- (_Bool)_hasDefinitionForTerm:(id)arg1;	// IMP=0x000000000057cae7
- (id)init;	// IMP=0x000000000057ca6b

@end

