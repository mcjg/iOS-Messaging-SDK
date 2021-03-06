// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import LPInfra;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC5LPAMS22AMSConversationHandler")
@interface AMSConversationHandler : NSObject <GeneralManagerProtocol>
+ (AMSConversationHandler * _Nonnull)instance;
- (void)sendPendingMessages:(LPConversationEntity * _Nonnull)conversation;
+ (BOOL)shouldReloadData:(LPMessageEntity * _Nonnull)message;
- (void)clearManager;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface AMSConversationHandler (SWIFT_EXTENSION(LPAMS))
@end


@interface AMSConversationHandler (SWIFT_EXTENSION(LPAMS))
@end


@interface AMSConversationHandler (SWIFT_EXTENSION(LPAMS))
@end


@interface AMSConversationHandler (SWIFT_EXTENSION(LPAMS))
@end


@interface AMSConversationHandler (SWIFT_EXTENSION(LPAMS))
@end

@protocol ConversationParamProtocol;
@protocol AMSManagerDelegate;
@class NSError;
@class CSATModel;

SWIFT_CLASS("_TtC5LPAMS10AMSManager")
@interface AMSManager : BaseConversationManager <GeneralManagerProtocol>
@property (nonatomic, weak) id <AMSManagerDelegate> _Nullable managerDelegate;
+ (AMSManager * _Nonnull)instance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;

/// Perform connect to socket for conversationQuery @param:
///
/// <ul><li>optional ready completion which will be called after the socket is connected</li></ul>
- (void)connectToSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery readyCompletion:(void (^ _Nullable)(void))readyCompletion;

/// Perform reconnect to socket for conversationQuery:
///
/// <ul><li>Remove the websocket handler</li><li>connect to socket
/// @param:</li><li>optional ready completion which will be called after the socket is connected</li></ul>
- (void)reconnectToSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery readyCompletion:(void (^ _Nullable)(void))readyCompletion;

/// Perform disconnect from socket for conversationQuery
- (void)disconnectSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
- (BOOL)clearHistory:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
- (void)deleteOldConversations;
- (void)setDelegate:(id <AMSManagerDelegate> _Nonnull)delegate;
- (void)removeDelegate;

/// Initialize new AMS Handler related paired with conversation.
- (void)initializeConversation:(LPConversationEntity * _Nonnull)conversation;

/// Create new AMSConversationHandler and attach it as delegate to its corresponding Web Socket Handler
- (void)setupConversation:(LPConversationEntity * _Nonnull)conversation;

/// Create new conversation instance
- (LPConversationEntity * _Nonnull)createConversation:(LPBrandEntity * _Nonnull)brand;
- (void)sendMessageInConversation:(LPConversationEntity * _Nonnull)conversation message:(LPMessageEntity * _Nonnull)message completion:(void (^ _Nonnull)(LPMessageEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
- (void)sendMessageInConversation:(LPConversationEntity * _Nonnull)conversation text:(NSString * _Nonnull)text completion:(void (^ _Nonnull)(LPMessageEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
- (void)resolveConversation:(LPConversationEntity * _Nonnull)conversation;
- (BOOL)requestUrgentResponse:(LPConversationEntity * _Nonnull)conversation urgent:(BOOL)urgent;
- (void)retrieveNewMessagesForConversation:(LPConversationEntity * _Nonnull)conversation completion:(void (^ _Nullable)(void))completion failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (void)sendCSATRate:(LPConversationEntity * _Nonnull)conversation csat:(CSATModel * _Nonnull)csat;
- (void)clearManager;
@end

@class Ring;

@interface AMSManager (SWIFT_EXTENSION(LPAMS))
- (void)takeConversation:(Ring * _Nonnull)ring agentToken:(NSString * _Nonnull)agentToken completion:(void (^ _Nonnull)(LPConversationEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
- (void)backToQueue:(NSString * _Nonnull)userID conversation:(LPConversationEntity * _Nonnull)conversation;
- (void)subscribeAgentState:(NSString * _Nonnull)agentID conversation:(LPConversationEntity * _Nonnull)conversation;
- (void)setAgentState:(NSString * _Nonnull)agentUserId channels:(NSArray<NSString *> * _Nonnull)channels availability:(NSString * _Nonnull)availability description:(NSString * _Nonnull)description conversation:(LPConversationEntity * _Nonnull)conversation;
- (void)agentRequestConversation:(NSDictionary<NSString *, NSString *> * _Nonnull)context ttrDefName:(NSString * _Nonnull)ttrDefName channelType:(NSString * _Nonnull)channelType consumerId:(NSString * _Nonnull)consumerId conversation:(LPConversationEntity * _Nonnull)conversation;
- (NSArray<NSString *> * _Nonnull)getAllConsumersID;
- (NSDictionary<NSString *, NSArray<LPConversationEntity *> *> * _Nonnull)getConversationsByConsumers;
@end

@class NSDate;

@interface AMSManager (SWIFT_EXTENSION(LPAMS))

/// Perform server request for unsubscribe exConversation
- (void)unsubscribeConversationDetails:(NSString * _Nonnull)brandID subscriptionID:(NSString * _Nonnull)subscriptionID;
- (void)saveSubscriptionID:(NSString * _Nonnull)subscriptionID brandID:(NSString * _Nonnull)brandID;
- (NSString * _Nullable)getSubscriptionID:(NSString * _Nonnull)brandID;
- (void)removeSubscription:(NSString * _Nonnull)brandID;

/// <code>   Save the last subscription time of a brand in order to get from now on only new changes
/// 
/// </code>
- (void)saveSubscriptionTime:(NSDate * _Nonnull)time brandID:(NSString * _Nonnull)brandID;

/// Archive subcription times in NSUserDefaults in order to load it for next subscription. We perform the archive after a delay of 20.0 seconds and cacnel all the archive request in this interval in order to prevent over-flow of archeiving
- (void)archiveSubscriptionTimeWithForceArchive:(BOOL)forceArchive;
- (void)sendGetClock:(NSString * _Nonnull)brandID completion:(void (^ _Nullable)(int64_t))completion;
- (void)saveClockDiff:(int64_t)clockDiff brandID:(NSString * _Nonnull)brandID;
- (NSString * _Nullable)getBrandIDForSubscriptionID:(NSString * _Nonnull)subscriptionID;
@end


@interface AMSManager (SWIFT_EXTENSION(LPAMS))
- (BOOL)shouldDisplayLocalNotificationForConversation:(LPConversationEntity * _Nonnull)conversation;
- (BOOL)isBrandReady:(NSString * _Nonnull)brandID;

/// Determines whether history query messages already fecthced
- (BOOL)didFetchHistoryQueryMessages;

/// Determines whether history query messages is now being fetched
- (BOOL)isFetchingHistoryQueryMessages;

/// Determines the name of the assigned agent that should be presented in UI areas. If assigned agent exists and has a nickname - return it. Otherwise, return empty string. If the empty string is returned, it should be handled according to UI area
- (NSString * _Nonnull)agentNameUIRepresentation:(LPConversationEntity * _Nullable)conversation;

/// Create resolved system message for conversation, according to resolving side Timestamp - when agent resolved we take the timestamp from server, when consumer resolved we take now.
- (void)sendResolveLocalMessage:(LPConversationEntity * _Nonnull)conversation isAgentSide:(BOOL)isAgentSide endTime:(NSDate * _Nonnull)endTime;

/// Sends local system message for masked message according to the current masking type: RealTime or ClientOnly masking. Return value - local masked message, nil if failed
- (LPMessageEntity * _Nullable)sendMessageMaskedLocalMessage:(LPConversationEntity * _Nonnull)conversation;

/// Get client properties to be sent to AMS using predefiend AMS parameters. This method is used for sending information to AMS
+ (NSString * _Nonnull)clientPropertiesString;
@end

@class TTRModel;

SWIFT_PROTOCOL("_TtP5LPAMS18AMSManagerDelegate_")
@protocol AMSManagerDelegate
- (void)didSendMessages:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (void)didReceiveMessages:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (void)resolveConvesationDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
- (void)resolveConvesationRequestDidFinish:(LPConversationEntity * _Nonnull)conversation;
- (void)conversationDidResolve:(LPConversationEntity * _Nonnull)conversation;
- (void)newConversationCreated:(LPConversationEntity * _Nonnull)conversation;
- (void)urgentRequestDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
- (void)chatStateChanged:(LPConversationEntity * _Nonnull)conversation state:(NSString * _Nonnull)state;
- (void)didChangeMessagesStatus:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (BOOL)isConversationRelatedToViewController:(LPConversationEntity * _Nonnull)conversation;
- (void)conversationInitializedOnAMS:(LPConversationEntity * _Nonnull)conversation;
@optional
- (void)didReceiveTTRUpdate:(LPConversationEntity * _Nonnull)conversation ttr:(TTRModel * _Nonnull)ttr;
- (void)didUpdateProfile:(LPConversationEntity * _Nonnull)conversation userId:(NSString * _Nonnull)userId;
- (void)csatScoreSubmissionDidFinish:(LPConversationEntity * _Nonnull)conversation csat:(CSATModel * _Nonnull)csat;
- (void)csatScoreSubmissionDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
@required
- (BOOL)isConversationVisible;
- (NSString * _Nullable)brandAccountID;
- (void)didReceiveRingUpdate:(NSString * _Nonnull)conversationID ring:(Ring * _Nonnull)ring;
@end

@class LPSections;

SWIFT_CLASS("_TtC5LPAMS22ConversationDataSource")
@interface ConversationDataSource : NSObject
+ (ConversationDataSource * _Nonnull)instance;
- (LPSections * _Nullable)getLatestMessages:(id <ConversationParamProtocol> _Nonnull)query;
- (LPSections * _Nonnull)getMessagesFromConversation:(LPConversationEntity * _Nonnull)conversation;

/// Get messages for an older conversation if exists
///
/// <ul><li>Get all converstions for query</li><li>Sort by creation date (newest is first)</li><li>Find the current conversation index</li><li>Find the next (older) conversation index</li><li>If current and next are different:<ul><li>Update the current conversation ref</li><li>Get messages of the next conversation</li></ul></li></ul>
- (LPSections * _Nullable)getMessagesFromOlderConversation:(id <ConversationParamProtocol> _Nonnull)query firstMessageOfCurrentConversation:(LPMessageEntity * _Nonnull)firstMessageOfCurrentConversation;

/// Get messages for an older conversation if exists
///
/// <ul><li>Get all converstions for query</li><li>Sort by creation date (newest is first)</li><li>Find the current conversation index</li><li>Find the next (older) conversation index</li><li>If current and next are different:</li><li>Update the current conversation ref</li><li>Get messages of the next conversation</li></ul>
- (LPConversationEntity * _Nullable)getOlderConversationForQueryMessagesIfExists:(id <ConversationParamProtocol> _Nonnull)query firstMessageOfCurrentConversation:(LPMessageEntity * _Nonnull)firstMessageOfCurrentConversation;

/// <code>   Get all conversations per query and params.
///    - QueryParamProtocol: protocol of the current requested type
/// 
/// </code>
- (NSArray<LPConversationEntity *> * _Nullable)getConversations:(id <ConversationParamProtocol> _Nonnull)query;

/// Get all active conversations per query and params.
///
/// <ul><li>QueryParamProtocol: protocol of the current requested type</li></ul>
- (LPConversationEntity * _Nullable)getActiveConversation:(id <ConversationParamProtocol> _Nonnull)query;

/// Get the newest (latest) close conversation if exists
///
/// <ul><li>QueryParamProtocol: protocol of the current requested type</li></ul>
- (NSArray<LPConversationEntity *> * _Nullable)getLatestClosedConversations:(id <ConversationParamProtocol> _Nonnull)query conversationsCount:(NSInteger)conversationsCount;
- (LPConversationEntity * _Nonnull)createConversation:(id <ConversationParamProtocol> _Nonnull)query;

/// Clear a dummy conversation and its assoicated messages. A dummy conversation is a conversation which is created and now only shows welcome message
- (BOOL)clearDummyConversation:(LPConversationEntity * _Nonnull)conversation;

/// Get the assigned agent of the recent open/closed conversation if exists.
- (LPUserEntity * _Nullable)getAssignedAgent:(id <ConversationParamProtocol> _Nonnull)query;
@end


SWIFT_CLASS("_TtC5LPAMS10LPSections")
@interface LPSections : NSObject <NSCopying>
@property (nonatomic, copy) NSDictionary<NSDate *, NSArray<LPMessageEntity *> *> * _Nonnull sections;
- (id _Nonnull)copyWithZone:(struct _NSZone * _Null_unspecified)zone;
- (NSArray<LPMessageEntity *> * _Nullable)objectForKeyedSubscript:(NSDate * _Nonnull)index;
- (void)setObject:(NSArray<LPMessageEntity *> * _Nullable)newValue forKeyedSubscript:(NSDate * _Nonnull)index;
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSInteger countMessages;
- (void)mergeWithMoreSections:(LPSections * _Nonnull)moreSections;
- (LPSections * _Nonnull)initWithMessages:(NSArray<LPMessageEntity *> * _Nullable)messages;
- (LPSections * _Nonnull)initWithMessage:(LPMessageEntity * _Nullable)message;
- (void)removeAll;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
