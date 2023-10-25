//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRModeDialogTransformer : NSObject
{
}

+ (id)_instrumentation;	// IMP=0x004000000009630c
+ (id)_analytics;	// IMP=0x00100000000962f3
+ (void)_logModeComputationForAceCommand:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0010000000096186
+ (id)_addViewsForAddDialogs:(id)arg1 views:(id)arg2;	// IMP=0x0010000000095edd
+ (id)_sayItForDialog:(id)arg1;	// IMP=0x0010000000095b2a
+ (id)_speakableTextForDialog:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000009561d
+ (id)_utteranceViewForDialog:(id)arg1 mode:(unsigned long long)arg2 printedOnly:(_Bool)arg3;	// IMP=0x0010000000094e35
+ (id)_transformDialogAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000946ce
+ (id)_removeUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000940bf
+ (id)_removeSpeakableTextFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x00100000000935ee
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000009319a
+ (id)_firstSnippetInViews:(id)arg1;	// IMP=0x001000000009304a
+ (_Bool)_alwaysPrintSiriResponse;	// IMP=0x0010000000092fff
+ (id)_redundantDUCIds;	// IMP=0x0010000000092d85
+ (id)_configurationDictionary;	// IMP=0x0010000000092c26
+ (id)_transformLegacyAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000092a3f
+ (_Bool)_shouldTransformLegacyAddViews;	// IMP=0x0000000000092a37
+ (unsigned long long)_typeOfAddViews:(id)arg1;	// IMP=0x0010000000092864
+ (_Bool)supportsTransformationForAceCommand:(id)arg1;	// IMP=0x0010000000092804
+ (id)transformAddDialogs:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000009224c
+ (id)transformAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000091fd5

@end
