//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXPTranslator.h"

@class AXUIElement, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AXPTranslator_iOS : AXPTranslator
{
    NSMutableDictionary *_translationCache;	// 8 = 0x8
    NSMutableDictionary *_backTranslationCache;	// 16 = 0x10
    NSMutableArray *_cachedElements;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 32 = 0x20
    _Bool _axAppReadyFlag;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_threadSemaphore;	// 48 = 0x30
    _Bool _accessibilityEnabled;	// 56 = 0x38
    struct __AXObserver *_axEventObserver;	// 64 = 0x40
    AXUIElement *_systemAppElement;	// 72 = 0x48
    AXUIElement *_systemWideElement;	// 80 = 0x50
}

+ (id)translationObjectFromUIKitObject:(id)arg1;	// IMP=0x006000000000c5fb
+ (id)sharedInstance;	// IMP=0x0060000000001524
- (void).cxx_destruct;	// IMP=0x000000000000c9d2
@property(retain, nonatomic) AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(retain, nonatomic) AXUIElement *systemAppElement; // @synthesize systemAppElement=_systemAppElement;
@property(retain, nonatomic) struct __AXObserver *axEventObserver; // @synthesize axEventObserver=_axEventObserver;
- (_Bool)accessibilityEnabled;	// IMP=0x000000000000c967
- (id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2;	// IMP=0x000000000000c825
- (id)translationObjectFromData:(id)arg1;	// IMP=0x000000000000c7d9
- (id)platformElementFromTranslation:(id)arg1;	// IMP=0x000000000000c67f
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;	// IMP=0x000000000000c679
- (id)translationObjectFromPlatformElement:(struct __AXUIElement *)arg1;	// IMP=0x000000000000c047
- (struct __AXUIElement *)createPlatformElementFromTranslationObject:(id)arg1;	// IMP=0x000000000000be33
- (id)processHitTest:(id)arg1;	// IMP=0x000000000000b87a
- (id)processFrontMostApp:(id)arg1;	// IMP=0x000000000000b46d
- (id)processApplicationObject:(id)arg1;	// IMP=0x000000000000b332
- (id)processAttributeRequest:(id)arg1;	// IMP=0x000000000000adad
- (id)_preprocessRequest:(long long)arg1 parameter:(id)arg2;	// IMP=0x000000000000aa13
- (id)processSupportsAttributes:(id)arg1;	// IMP=0x000000000000a65d
- (id)processSupportedActions:(id)arg1;	// IMP=0x000000000000a3bc
- (id)processSetAttribute:(id)arg1;	// IMP=0x0000000000009f5f
- (id)processCanSetAttribute:(id)arg1;	// IMP=0x0000000000009cf8
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4 client:(unsigned long long)arg5;	// IMP=0x00000000000097ad
- (id)_processVisibleOpaqueElements:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000096b1
- (id)_processFirstElementForFocus:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000095c9
- (id)_processLastContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000949e
- (id)_processIsFocusedAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000093b2
- (id)_processFocusedElementAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000092f4
- (id)_processFirstContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000091c9
- (id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000912f
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long *)arg3 client:(unsigned long long)arg4;	// IMP=0x0000000000009107
- (id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008fdb
- (id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000008e49
- (id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000008c8e
- (id)_processAuditIssuesAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000008936
- (id)_processVisibleTextRangeAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008859
- (id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000008722
- (id)_processRoleDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008232
- (unsigned long long)_processRoleAttributeRequest:(id)arg1 traits:(unsigned long long)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007dbb
- (id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000007cdd
- (id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000007c60
- (id)_processLabelAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;	// IMP=0x0000000000007bf5
- (id)_processSyntheticStringValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000007a8c
- (id)_processValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3 useAttributes:(_Bool)arg4;	// IMP=0x0000000000007892
- (id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000770f
- (id)_processSelectedTextRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000075a6
- (id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000074eb
- (id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000000727f
- (id)_processPreviousLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000070db
- (id)_processNextLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000006f42
- (id)_processLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000006eb4
- (id)_processZoomAttributeRequest:(_Bool)arg1 axElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000006df6
- (id)_processTextInputMarkedRangeAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006bd4
- (id)_processIndexForTextMarkerAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000694a
- (id)_processLinkedUIElementsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000661e
- (id)_processElementHelpAttributeResquest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000654d
- (id)_processCellWithIndexPathAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000637c
- (id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006300
- (id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006218
- (id)_processBrailleOverrideForAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 attribute:(unsigned long long)arg3;	// IMP=0x0000000000006152
- (id)_processUserInputLabelsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;	// IMP=0x0000000000005839
- (id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000057c3
- (id)_processIsRemoteElementAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000005778
- (id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000005702
- (id)_processViewControllerDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000055eb
- (id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000005575
- (id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x000000000000547b
- (id)_processCustomRotorData:(id)arg1;	// IMP=0x0000000000004fa2
- (id)_processAuditIssuesResult:(id)arg1;	// IMP=0x0000000000004c74
- (id)_processOutgoingCustomRotorSearchResult:(id)arg1;	// IMP=0x0000000000004b8d
- (id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0000000000004439
- (id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000043e7
- (id)processActionRequest:(id)arg1;	// IMP=0x00000000000041ee
- (id)axElementFromTranslatorRequest:(id)arg1;	// IMP=0x0000000000004120
- (id)processMultipleAttributeRequest:(id)arg1;	// IMP=0x00000000000038e2
- (long long)attributeFromRequest:(unsigned long long)arg1;	// IMP=0x00000000000038c8
- (void)enableAccessibility;	// IMP=0x00000000000038b6
- (void)_enableAccessibilityBridgeRuntime;	// IMP=0x0000000000003689
- (void)_signalAppAXReady;	// IMP=0x0000000000003662
- (void)setAccessibilityEnabled:(_Bool)arg1;	// IMP=0x000000000000363d
- (void)initializeAXRuntimeForSystemAppServer;	// IMP=0x0000000000003324
- (id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;	// IMP=0x000000000000331c
- (_Bool)_processPerformAction:(int)arg1 value:(id)arg2;	// IMP=0x0000000000003314
- (id)_processAccessibilityAttributeValue:(long long)arg1;	// IMP=0x0000000000003231
- (void)_registerAccessibilityNotifications;	// IMP=0x0000000000002d4e
- (CDUnknownBlockType)attributedStringConversionBlock;	// IMP=0x0000000000001c74
- (id)backTranslationCache;	// IMP=0x0000000000001c45
- (id)translationCache;	// IMP=0x0000000000001c16
- (void)_removeCacheEntriesForElement:(id)arg1;	// IMP=0x0000000000001950
- (void)_addCacheElement:(id)arg1 translationObject:(id)arg2;	// IMP=0x00000000000016d4
- (id)init;	// IMP=0x00000000000015c1

@end

