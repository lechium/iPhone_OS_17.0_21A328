//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVMediaSelectionOption : NSObject
{
    struct RetainPtr<NSString> _localizedDisplayName;	// 8 = 0x8
    NSString *_mediaType;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000e70ca0
- (void).cxx_destruct;	// IMP=0x0000000000e70c80
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (id)track;	// IMP=0x0000000000e70c50
- (id)languageCode;	// IMP=0x0000000000e70c30
- (_Bool)_isDesignatedDefault;	// IMP=0x0000000000e70c10
- (id)outOfBandIdentifier;	// IMP=0x0000000000e70bf0
- (id)outOfBandSource;	// IMP=0x0000000000e70bd0
- (id)mediaCharacteristics;	// IMP=0x0000000000e70bb0
- (id)displayNameWithLocale:(id)arg1;	// IMP=0x0000000000e70b90
- (id)propertyList;	// IMP=0x0000000000e70b70
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000e70b50
- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000e70b30
- (id)availableMetadataFormats;	// IMP=0x0000000000e70b10
- (id)commonMetadata;	// IMP=0x0000000000e70af0
- (id)locale;	// IMP=0x0000000000e70ad0
- (id)extendedLanguageTag;	// IMP=0x0000000000e70ab0
- (_Bool)isPlayable;	// IMP=0x0000000000e70a90
- (_Bool)hasMediaCharacteristic:(id)arg1;	// IMP=0x0000000000e70a70
- (id)mediaSubTypes;	// IMP=0x0000000000e70a50
@property(readonly, nonatomic) NSString *localizedDisplayName;
- (id)initWithMediaType:(id)arg1 displayName:(id)arg2;	// IMP=0x0000000000e709d0

@end
