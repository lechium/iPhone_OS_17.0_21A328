//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSOperationQueue, NSString, NSURL, NSXPCConnection, SDAirDropActivity, SDPeopleBrowser, SDScreenTimeMonitor, SDShareSheetAirDropController, SDShareSheetProxyLoaderManager, SDSuggestionBrowser, SDXPCHelperConnection, SFAirDropNode, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISUIActivityViewControllerConfiguration, UISelectionFeedbackGenerator, _UIActivityHelper, _UIUserDefaultsActivity;
@protocol SDShareSheetSessionDelegate, SFAirDropNodeProtocol;

@interface SDShareSheetSession : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _instantShareSheet;	// 9 = 0x9
    _Bool _remoteShareSheet;	// 10 = 0xa
    _Bool _airDropAllowed;	// 11 = 0xb
    _Bool _engagedWithSheet;	// 12 = 0xc
    _Bool _sentInitialConfiguration;	// 13 = 0xd
    _Bool _sharingExpanded;	// 14 = 0xe
    _Bool _shouldSuggestFamilyMembers;	// 15 = 0xf
    _Bool _hideSuggestions;	// 16 = 0x10
    _Bool _isSharePlayAvailable;	// 17 = 0x11
    _Bool _isCollaborative;	// 18 = 0x12
    _Bool _supportsCollaboration;	// 19 = 0x13
    _Bool _itemsRequested;	// 20 = 0x14
    _Bool _itemsReady;	// 21 = 0x15
    _Bool _firedImpactHaptic;	// 22 = 0x16
    _Bool _transferActive;	// 23 = 0x17
    _Bool _invalidateCalled;	// 24 = 0x18
    int _sharedItemsCount;	// 28 = 0x1c
    NSString *_sessionID;	// 32 = 0x20
    NSXPCConnection *__connection;	// 40 = 0x28
    NSXPCConnection *__uiServiceConnection;	// 48 = 0x30
    unsigned long long _xrRenderingMode;	// 56 = 0x38
    id <SDShareSheetSessionDelegate> _delegate;	// 64 = 0x40
    long long _sharedItemsRequestID;	// 72 = 0x48
    long long _attachmentCount;	// 80 = 0x50
    NSMutableOrderedSet *_cachedSharedItems;	// 88 = 0x58
    NSOperationQueue *_operationQueue;	// 96 = 0x60
    long long _generatedPreviews;	// 104 = 0x68
    NSMutableDictionary *_sharedItemsMap;	// 112 = 0x70
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;	// 120 = 0x78
    long long _lastTransferEvent;	// 128 = 0x80
    UINotificationFeedbackGenerator *_notificationHaptic;	// 136 = 0x88
    UISelectionFeedbackGenerator *_selectionHaptic;	// 144 = 0x90
    UIImpactFeedbackGenerator *_impactHaptic;	// 152 = 0x98
    SDAirDropActivity *_activeAirDropActivity;	// 160 = 0xa0
    _UIUserDefaultsActivity *_shareUserDefaultsActivity;	// 168 = 0xa8
    SDScreenTimeMonitor *_screenTimeMonitor;	// 176 = 0xb0
    id <SFAirDropNodeProtocol> _selectedNode;	// 184 = 0xb8
    NSMutableDictionary *_transferNodes;	// 192 = 0xc0
    SFAirDropNode *_selectedRecipient;	// 200 = 0xc8
    SDPeopleBrowser *_peopleBrowser;	// 208 = 0xd0
    SDSuggestionBrowser *_suggestionBrowser;	// 216 = 0xd8
    double _peopleSuggestionsTimeout;	// 224 = 0xe0
    SDXPCHelperConnection *_xpcHelperCnx;	// 232 = 0xe8
    _UIActivityHelper *_activityHelper;	// 240 = 0xf0
    UISUIActivityViewControllerConfiguration *_hostConfiguration;	// 248 = 0xf8
    NSArray *_orderedPresentableActivities;	// 256 = 0x100
    NSArray *_hiddenActivities;	// 264 = 0x108
    NSDictionary *_bundleIDToActivities;	// 272 = 0x110
    NSArray *_airDropPeople;	// 280 = 0x118
    NSArray *_suggestedPeople;	// 288 = 0x120
    NSArray *_shareActivities;	// 296 = 0x128
    NSDictionary *_shareActivitiesByUUID;	// 304 = 0x130
    NSArray *_shareActivitiesInUserOrder;	// 312 = 0x138
    NSArray *_visibleShareActivities;	// 320 = 0x140
    NSArray *_actionActivities;	// 328 = 0x148
    NSDictionary *_actionActivitiesByUUID;	// 336 = 0x150
    NSArray *_actionActivitiesInUserOrder;	// 344 = 0x158
    NSArray *_visibleActionActivities;	// 352 = 0x160
    NSArray *_favoriteApps;	// 360 = 0x168
    NSArray *_favoriteActions;	// 368 = 0x170
    NSArray *_airDropNodes;	// 376 = 0x178
    NSArray *_peopleNodes;	// 384 = 0x180
    NSArray *_hostShareActivityProxies;	// 392 = 0x188
    NSArray *_hostActionActivityProxies;	// 400 = 0x190
    NSMutableDictionary *_realNameToNodeID;	// 408 = 0x198
    NSMutableDictionary *_shareActivityToID;	// 416 = 0x1a0
    NSMutableDictionary *_actionActivityToID;	// 424 = 0x1a8
    NSNumber *_nearbyCountSlotID;	// 432 = 0x1b0
    long long _nearbyCountBadge;	// 440 = 0x1b8
    NSURL *_urlBeingShared;	// 448 = 0x1c0
    NSMutableArray *_activeSecurityContexts;	// 456 = 0x1c8
    SDShareSheetProxyLoaderManager *_proxyLoaderManager;	// 464 = 0x1d0
    unsigned long long _airDropNearbyCount;	// 472 = 0x1d8
    SDShareSheetAirDropController *_airDropController;	// 480 = 0x1e0
    CDUnknownBlockType _disabledNodesUpdatedHandler;	// 488 = 0x1e8
    NSArray *_peopleSuggestionBundleIds;	// 496 = 0x1f0
    NSData *_processedImageResultsData;	// 504 = 0x1f8
}

+ (id)secondaryLabelColorWithHostConfiguration:(id)arg1;	// IMP=0x0020000000157a63
+ (id)labelColorWithHostConfiguration:(id)arg1;	// IMP=0x00100000001578e6
- (void).cxx_destruct;	// IMP=0x00200000001594b2
@property(copy, nonatomic) NSData *processedImageResultsData; // @synthesize processedImageResultsData=_processedImageResultsData;
@property(copy, nonatomic) NSArray *peopleSuggestionBundleIds; // @synthesize peopleSuggestionBundleIds=_peopleSuggestionBundleIds;
@property(nonatomic) _Bool invalidateCalled; // @synthesize invalidateCalled=_invalidateCalled;
@property(copy, nonatomic) CDUnknownBlockType disabledNodesUpdatedHandler; // @synthesize disabledNodesUpdatedHandler=_disabledNodesUpdatedHandler;
@property(retain, nonatomic) SDShareSheetAirDropController *airDropController; // @synthesize airDropController=_airDropController;
@property(nonatomic) unsigned long long airDropNearbyCount; // @synthesize airDropNearbyCount=_airDropNearbyCount;
@property(retain, nonatomic) SDShareSheetProxyLoaderManager *proxyLoaderManager; // @synthesize proxyLoaderManager=_proxyLoaderManager;
@property(retain, nonatomic) NSMutableArray *activeSecurityContexts; // @synthesize activeSecurityContexts=_activeSecurityContexts;
@property(retain, nonatomic) NSURL *urlBeingShared; // @synthesize urlBeingShared=_urlBeingShared;
@property(nonatomic) long long nearbyCountBadge; // @synthesize nearbyCountBadge=_nearbyCountBadge;
@property(retain, nonatomic) NSNumber *nearbyCountSlotID; // @synthesize nearbyCountSlotID=_nearbyCountSlotID;
@property(retain, nonatomic) NSMutableDictionary *actionActivityToID; // @synthesize actionActivityToID=_actionActivityToID;
@property(retain, nonatomic) NSMutableDictionary *shareActivityToID; // @synthesize shareActivityToID=_shareActivityToID;
@property(retain, nonatomic) NSMutableDictionary *realNameToNodeID; // @synthesize realNameToNodeID=_realNameToNodeID;
@property(retain, nonatomic) NSArray *hostActionActivityProxies; // @synthesize hostActionActivityProxies=_hostActionActivityProxies;
@property(retain, nonatomic) NSArray *hostShareActivityProxies; // @synthesize hostShareActivityProxies=_hostShareActivityProxies;
@property(retain, nonatomic) NSArray *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(retain, nonatomic) NSArray *airDropNodes; // @synthesize airDropNodes=_airDropNodes;
@property(retain, nonatomic) NSArray *favoriteActions; // @synthesize favoriteActions=_favoriteActions;
@property(retain, nonatomic) NSArray *favoriteApps; // @synthesize favoriteApps=_favoriteApps;
@property(retain, nonatomic) NSArray *visibleActionActivities; // @synthesize visibleActionActivities=_visibleActionActivities;
@property(retain, nonatomic) NSArray *actionActivitiesInUserOrder; // @synthesize actionActivitiesInUserOrder=_actionActivitiesInUserOrder;
@property(retain, nonatomic) NSDictionary *actionActivitiesByUUID; // @synthesize actionActivitiesByUUID=_actionActivitiesByUUID;
@property(retain, nonatomic) NSArray *actionActivities; // @synthesize actionActivities=_actionActivities;
@property(retain, nonatomic) NSArray *visibleShareActivities; // @synthesize visibleShareActivities=_visibleShareActivities;
@property(retain, nonatomic) NSArray *shareActivitiesInUserOrder; // @synthesize shareActivitiesInUserOrder=_shareActivitiesInUserOrder;
@property(retain, nonatomic) NSDictionary *shareActivitiesByUUID; // @synthesize shareActivitiesByUUID=_shareActivitiesByUUID;
@property(retain, nonatomic) NSArray *shareActivities; // @synthesize shareActivities=_shareActivities;
@property(retain, nonatomic) NSArray *suggestedPeople; // @synthesize suggestedPeople=_suggestedPeople;
@property(retain, nonatomic) NSArray *airDropPeople; // @synthesize airDropPeople=_airDropPeople;
@property(retain, nonatomic) NSDictionary *bundleIDToActivities; // @synthesize bundleIDToActivities=_bundleIDToActivities;
@property(retain, nonatomic) NSArray *hiddenActivities; // @synthesize hiddenActivities=_hiddenActivities;
@property(retain, nonatomic) NSArray *orderedPresentableActivities; // @synthesize orderedPresentableActivities=_orderedPresentableActivities;
@property(retain, nonatomic) UISUIActivityViewControllerConfiguration *hostConfiguration; // @synthesize hostConfiguration=_hostConfiguration;
@property(retain, nonatomic) _UIActivityHelper *activityHelper; // @synthesize activityHelper=_activityHelper;
@property(retain, nonatomic) SDXPCHelperConnection *xpcHelperCnx; // @synthesize xpcHelperCnx=_xpcHelperCnx;
@property(nonatomic) double peopleSuggestionsTimeout; // @synthesize peopleSuggestionsTimeout=_peopleSuggestionsTimeout;
@property(retain, nonatomic) SDSuggestionBrowser *suggestionBrowser; // @synthesize suggestionBrowser=_suggestionBrowser;
@property(retain, nonatomic) SDPeopleBrowser *peopleBrowser; // @synthesize peopleBrowser=_peopleBrowser;
@property(retain, nonatomic) SFAirDropNode *selectedRecipient; // @synthesize selectedRecipient=_selectedRecipient;
@property(retain, nonatomic) NSMutableDictionary *transferNodes; // @synthesize transferNodes=_transferNodes;
@property(retain, nonatomic) id <SFAirDropNodeProtocol> selectedNode; // @synthesize selectedNode=_selectedNode;
@property(retain, nonatomic) SDScreenTimeMonitor *screenTimeMonitor; // @synthesize screenTimeMonitor=_screenTimeMonitor;
@property(retain, nonatomic) _UIUserDefaultsActivity *shareUserDefaultsActivity; // @synthesize shareUserDefaultsActivity=_shareUserDefaultsActivity;
@property(retain, nonatomic) SDAirDropActivity *activeAirDropActivity; // @synthesize activeAirDropActivity=_activeAirDropActivity;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic; // @synthesize impactHaptic=_impactHaptic;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic; // @synthesize selectionHaptic=_selectionHaptic;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic; // @synthesize notificationHaptic=_notificationHaptic;
@property(nonatomic) long long lastTransferEvent; // @synthesize lastTransferEvent=_lastTransferEvent;
@property(retain, nonatomic) NSMutableDictionary *sharedItemsRequestIDToPreviewPhoto; // @synthesize sharedItemsRequestIDToPreviewPhoto=_sharedItemsRequestIDToPreviewPhoto;
@property(retain, nonatomic) NSMutableDictionary *sharedItemsMap; // @synthesize sharedItemsMap=_sharedItemsMap;
@property(nonatomic) int sharedItemsCount; // @synthesize sharedItemsCount=_sharedItemsCount;
@property(nonatomic) long long generatedPreviews; // @synthesize generatedPreviews=_generatedPreviews;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool transferActive; // @synthesize transferActive=_transferActive;
@property(nonatomic) _Bool firedImpactHaptic; // @synthesize firedImpactHaptic=_firedImpactHaptic;
@property(nonatomic) _Bool itemsReady; // @synthesize itemsReady=_itemsReady;
@property(nonatomic) _Bool itemsRequested; // @synthesize itemsRequested=_itemsRequested;
@property(retain, nonatomic) NSMutableOrderedSet *cachedSharedItems; // @synthesize cachedSharedItems=_cachedSharedItems;
@property(nonatomic) long long attachmentCount; // @synthesize attachmentCount=_attachmentCount;
@property(nonatomic) long long sharedItemsRequestID; // @synthesize sharedItemsRequestID=_sharedItemsRequestID;
@property(nonatomic) _Bool supportsCollaboration; // @synthesize supportsCollaboration=_supportsCollaboration;
@property(nonatomic) _Bool isCollaborative; // @synthesize isCollaborative=_isCollaborative;
@property(nonatomic) _Bool isSharePlayAvailable; // @synthesize isSharePlayAvailable=_isSharePlayAvailable;
@property(nonatomic) _Bool hideSuggestions; // @synthesize hideSuggestions=_hideSuggestions;
@property(nonatomic) _Bool shouldSuggestFamilyMembers; // @synthesize shouldSuggestFamilyMembers=_shouldSuggestFamilyMembers;
@property(nonatomic) _Bool sharingExpanded; // @synthesize sharingExpanded=_sharingExpanded;
@property(nonatomic) _Bool sentInitialConfiguration; // @synthesize sentInitialConfiguration=_sentInitialConfiguration;
@property(nonatomic) _Bool engagedWithSheet; // @synthesize engagedWithSheet=_engagedWithSheet;
@property(nonatomic) _Bool airDropAllowed; // @synthesize airDropAllowed=_airDropAllowed;
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000158d55
- (id)delegate;	// IMP=0x0010000000158d3f
@property(readonly, nonatomic) unsigned long long xrRenderingMode; // @synthesize xrRenderingMode=_xrRenderingMode;
@property(readonly, nonatomic) _Bool remoteShareSheet; // @synthesize remoteShareSheet=_remoteShareSheet;
@property(readonly, nonatomic) _Bool instantShareSheet; // @synthesize instantShareSheet=_instantShareSheet;
@property(retain, nonatomic) NSXPCConnection *_uiServiceConnection; // @synthesize _uiServiceConnection=__uiServiceConnection;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)proxyLoaderManagerDidFinishLoadingProxySection:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0010000000158c1a
- (void)proxyLoaderManager:(id)arg1 didLoadProxiesWithChangeDetails:(id)arg2;	// IMP=0x0010000000158bbe
- (void)_updateProxiesWithChangeDetails:(id)arg1;	// IMP=0x00100000001589d8
- (void)_removeFailedIndexes:(id)arg1 forProxySection:(id)arg2;	// IMP=0x0010000000158788
- (void)reportCurrentInvocationForDuration:(long long)arg1;	// IMP=0x0010000000158379
- (void)_loadProxySectionWithType:(long long)arg1;	// IMP=0x00100000001582ae
- (id)_proxySectionForType:(long long)arg1;	// IMP=0x00100000001581bf
- (id)minimumVisibleShareActivities;	// IMP=0x0010000000157bfb
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;	// IMP=0x0010000000157349
- (_Bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x0010000000157037
- (_Bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x0010000000156dc0
- (_Bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000156809
- (_Bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6;	// IMP=0x0010000000156527
- (_Bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x0010000000156049
- (_Bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x0010000000155a6e
- (_Bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;	// IMP=0x0010000000154e1a
- (void)resetAfterAirDropTransfer;	// IMP=0x0010000000154d38
- (void)cancelAirDropForNode:(id)arg1;	// IMP=0x0010000000154caa
- (void)startSendForNode:(id)arg1 WithItems:(id)arg2 itemData:(id)arg3;	// IMP=0x0010000000153e43
@property(readonly, nonatomic) NSString *hostAppProcessName;
@property(readonly, nonatomic) NSString *hostAppBundleID;
- (id)_orderedActivitiesIncludingUserDisabledExtensionsForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000153d73
- (void)_loadPresentableActivitiesForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000153c67
- (id)_orderedAvailableActivitiesForAuditToken:(CDStruct_4c969caf)arg1 WithMatchingContextCustomizationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000153845
- (void)checkPolicyForAirDropPeople;	// IMP=0x00100000001532b9
- (void)checkPolicyForSuggestedPeople;	// IMP=0x0010000000152b95
- (void)updateRestrictedActivityTypes:(id)arg1;	// IMP=0x0010000000152445
- (void)nodesPotentiallyUpdated;	// IMP=0x0010000000152391
- (void)systemRestrictionsChanged:(id)arg1;	// IMP=0x0010000000151c02
- (void)removeStatusMonitorObservers;	// IMP=0x0010000000151baf
- (void)addStatusMonitorObservers;	// IMP=0x0010000000151b1e
- (id)airdropNodeForIdentifier:(id)arg1;	// IMP=0x00100000001518bd
- (void)_deactivateSecurityContext:(id)arg1;	// IMP=0x0010000000151801
- (void)_activateSecurityContext:(id)arg1;	// IMP=0x0010000000151745
- (void)setUiServiceConnection:(id)arg1;	// IMP=0x00100000001516da
- (id)uiServiceConnection;	// IMP=0x001000000015167f
- (id)connection;	// IMP=0x0010000000151624
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool skipSlotsRendering;
- (void)invalidate;	// IMP=0x00100000001512f5
- (void)activate;	// IMP=0x0010000000151098
- (id)initWithSessionID:(id)arg1 xpcConnection:(id)arg2 instantShareSheet:(_Bool)arg3 remoteShareSheet:(_Bool)arg4 xrRenderingMode:(unsigned long long)arg5;	// IMP=0x00100000001507e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
