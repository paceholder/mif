#ifndef __MIF_NET_CLIENTS_FRAME_READER_H__
#define __MIF_NET_CLIENTS_FRAME_READER_H__

// STD
#include <memory>

// MIF
#include "mif/net/client.h"

namespace Mif
{
    namespace Net
    {
        namespace Clients
        {

            class FrameReader final
                : public Net::Client
            {
            public:
                FrameReader(std::weak_ptr<IControl> control, std::weak_ptr<IPublisher> publisher);

            protected:
                // Client
                virtual void ProcessData(Common::Buffer buffer) override final;
            };

        }   // namespace Clients
    }   // namespace Net
}   // namespace Mif

#endif  // !__MIF_NET_CLIENTS_FRAME_READER_H__